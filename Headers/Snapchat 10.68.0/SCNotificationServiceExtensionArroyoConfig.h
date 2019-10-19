//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDictionary, NSString;

@interface SCNotificationServiceExtensionArroyoConfig : NSObject <NSCopying, NSCoding>
{
    _Bool _enableDebugTracing;
    _Bool _useArroyoForNewConversations;
    NSString *_messagingEndpoint;
    NSDictionary *_tweaks;
}

@property(readonly, copy, nonatomic) NSDictionary *tweaks; // @synthesize tweaks=_tweaks;
@property(readonly, nonatomic) _Bool useArroyoForNewConversations; // @synthesize useArroyoForNewConversations=_useArroyoForNewConversations;
@property(readonly, nonatomic) _Bool enableDebugTracing; // @synthesize enableDebugTracing=_enableDebugTracing;
@property(readonly, copy, nonatomic) NSString *messagingEndpoint; // @synthesize messagingEndpoint=_messagingEndpoint;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMessagingEndpoint:(id)arg1 enableDebugTracing:(_Bool)arg2 useArroyoForNewConversations:(_Bool)arg3 tweaks:(id)arg4;
- (id)initWithCoder:(id)arg1;

@end

