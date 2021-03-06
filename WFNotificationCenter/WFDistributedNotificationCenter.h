//
//  WFDistributedNotificationCenter.h
//  WorkflowKit
//
//  Created by Conrad Kramer on 3/5/15.
//  Copyright (c) 2015 DeskConnect. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WFDistributedNotificationCenter : NSObject

- (instancetype)initWithSecurityApplicationGroupIdentifier:(NSString *)groupIdentifier NS_DESIGNATED_INITIALIZER;

- (void)addObserver:(id)observer selector:(SEL)aSelector name:(NSString *)aName;

- (void)postNotification:(NSNotification *)notification;
- (void)postNotificationName:(NSString *)aName;
- (void)postNotificationName:(NSString *)aName userInfo:(NSDictionary *)aUserInfo;

- (void)removeObserver:(id)observer;
- (void)removeObserver:(id)observer name:(NSString *)aName;

@end
