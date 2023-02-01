//
//  ContactBrain.swift
//  ContactList
//
//  Created by Beatrix Kang on 18/01/2023.
//

import Foundation
import RxSwift

struct JSONFetcher{
    
    func fetchData<T: Codable>(url: String) -> Observable<T> {
        //1. Observable gets data from a given url
      return Observable<T>.create { observer in
          
        guard let request = URL(string: url) else {
            return Disposables.create()
        }

          //2.Takes Data and stores it in the request
        let task = URLSession.shared.dataTask(with: request ) { (data, response, error) in
          do {
            //3. If the Data does exist, decode the JSON data and store it in model
            let model = try JSONDecoder().decode(T.self, from: data ?? Data())
            observer.onNext( model )
          } catch let error {
              //4. if theres error, call on Error state
            observer.onError(error)
          }
            //5. If there is no error, call onCompleted state
          observer.onCompleted()
        }
        
        task.resume()
        return Disposables.create {
          task.cancel()
        }
      }
    }
}
