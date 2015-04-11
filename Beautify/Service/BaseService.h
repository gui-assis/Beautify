//
//  BaseService.h
//  Beautify
//
//  Created by Guilherme Augusto on 11/04/15.
//  Copyright (c) 2015 Cousins Corp. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AppHelper.h"

@interface BaseService : NSObject

@property (nonatomic) BOOL isTimeOut;
@property (nonatomic, strong) NSString *strRequestData;
@property (nonatomic, strong) NSMutableData *requestData;
@property (nonatomic, strong) NSURLConnection *connection;
@property (nonatomic, strong) NSTimer *timeOutTimer;

-(void) requestToUrl:(NSString *)strUrl timeOut:(int)timeOut;
-(void) onTimeout:(NSString*) message;
-(void) treatReceivedData;
-(void) errorMessage:(NSString*) errorMessage;

-(NSString*) getUrlForContext:(NSString*) context;


@end
