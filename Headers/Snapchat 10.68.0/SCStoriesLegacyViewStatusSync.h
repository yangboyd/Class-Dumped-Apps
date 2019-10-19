//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying-Protocol.h"

@class NSString, SCStoriesSnapViewStatus;

@interface SCStoriesLegacyViewStatusSync : SCDocObject <NSCopying>
{
    NSString *_storySnapServerId;
    NSString *_legacyUsername;
    SCStoriesSnapViewStatus *_viewStatus;
}

+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (id)immutableObjectParse:(const void *)arg1 bufferSize:(unsigned long long)arg2;
+ (const char *)table;
@property(readonly, copy, nonatomic) SCStoriesSnapViewStatus *viewStatus; // @synthesize viewStatus=_viewStatus;
@property(readonly, copy, nonatomic) NSString *legacyUsername; // @synthesize legacyUsername=_legacyUsername;
@property(readonly, copy, nonatomic) NSString *storySnapServerId; // @synthesize storySnapServerId=_storySnapServerId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStorySnapServerId:(id)arg1 legacyUsername:(id)arg2 viewStatus:(id)arg3;

@end

