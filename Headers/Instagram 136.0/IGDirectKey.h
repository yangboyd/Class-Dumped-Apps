//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString;

@interface IGDirectKey : NSObject <NSCopying>
{
    NSString *_clientId;
    NSString *_serverId;
}

+ (id)keyWithServerId:(id)arg1;
@property(readonly, copy, nonatomic) NSString *serverId; // @synthesize serverId=_serverId;
@property(readonly, copy, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isPublished;
- (id)value;
- (id)initWithServerId:(id)arg1 clientId:(id)arg2;
- (id)initWithClientId:(id)arg1;
- (id)initWithServerId:(id)arg1;

@end

