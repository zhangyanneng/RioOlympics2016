//
//  Events.h
//  PersistenceLayer
//
//  Created by zyn on 16/1/9.
//  Copyright © 2016年 zyn. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Events : NSObject
@property(nonatomic,assign) NSInteger eventID;
@property(nonatomic,strong) NSString *eventName;
@property(nonatomic,strong) NSString *eventIcon;
//关键信息
@property(nonatomic,strong) NSString *keyInfo;
//基本信息
@property(nonatomic,strong) NSString *basicsInfo;
//奥运会历史信息
@property(nonatomic,strong) NSString *olympicInfo;

@end
