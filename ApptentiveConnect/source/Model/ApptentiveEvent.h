//
//  ApptentiveEvent.h
//  ApptentiveConnect
//
//  Created by Andrew Wooster on 2/13/13.
//  Copyright (c) 2013 Apptentive, Inc. All rights reserved.
//

#import "ApptentiveRecord.h"
#import "ApptentiveRecordRequestTask.h"
#import "ApptentiveJSONModel.h"


@interface ApptentiveEvent : ApptentiveRecord <ApptentiveJSONModel>

@property (strong, nonatomic) NSString *pendingEventID;
@property (strong, nonatomic) NSData *dictionaryData;
@property (strong, nonatomic) NSString *label;

+ (instancetype)newInstanceWithLabel:(NSString *)label;
+ (instancetype)findEventWithPendingID:(NSString *)pendingEventID;
- (void)addEntriesFromDictionary:(NSDictionary *)dictionary;

- (void)cleanupAfterTask:(ApptentiveRecordRequestTask *)task;
- (ApptentiveAPIRequest *)requestForTask:(ApptentiveRecordRequestTask *)task;
- (ATRecordRequestTaskResult)taskResultForTask:(ApptentiveRecordRequestTask *)task withRequest:(ApptentiveAPIRequest *)request withResult:(id)result;

@end
