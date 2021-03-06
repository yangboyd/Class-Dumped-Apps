//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSNumber, NSString;

@interface SPTLoggingParams : NSObject <NSCopying, NSMutableCopying>
{
    NSNumber *_commandInitiatedTime;
    NSString *_pageInstanceId;
    NSString *_interactionId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *interactionId; // @synthesize interactionId=_interactionId;
@property(copy, nonatomic) NSString *pageInstanceId; // @synthesize pageInstanceId=_pageInstanceId;
@property(copy, nonatomic) NSNumber *commandInitiatedTime; // @synthesize commandInitiatedTime=_commandInitiatedTime;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializedDictionary;

@end

