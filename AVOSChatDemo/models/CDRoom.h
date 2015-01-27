//
//  ChatRoom.h
//  AVOSChatDemo
//
//  Created by lzw on 14/10/27.
//  Copyright (c) 2014年 AVOS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CDCommon.h"
#import "CDConv.h"

@interface CDRoom : NSObject

@property CDConvType type;

@property AVIMConversation* conv;

@property NSString* otherId; // if single

@property AVIMTypedMessage* lastMsg;

@property NSInteger unreadCount;

@end
