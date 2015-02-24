//
//  NetworkController.h
//  exquisite
//
//  Created by drwizzard on 2/23/15.
//  Copyright (c) 2015 nacnud. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NetworkController : NSObject

+(id)sharedService;

-(void)createNewAccountWithUserName:(NSString *) username password:(NSString *)passwd;

-(void)fetchStoryWithCompletionHandler: (void (^)(NSDictionary *results, NSString *error)) completionHandler;

@end