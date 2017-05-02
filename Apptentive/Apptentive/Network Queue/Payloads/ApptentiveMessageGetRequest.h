//
//  ApptentiveMessageGetRequest.h
//  Apptentive
//
//  Created by Frank Schmitt on 4/21/17.
//  Copyright © 2017 Apptentive, Inc. All rights reserved.
//

#import "ApptentiveConversationBaseRequest.h"

@interface ApptentiveMessageGetRequest : ApptentiveConversationBaseRequest

@property (strong, nullable, nonatomic) NSString *lastMessageIdentifier;

@end
