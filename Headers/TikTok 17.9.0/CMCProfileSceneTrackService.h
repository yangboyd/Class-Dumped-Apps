//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CMCProfileSceneTrackService : NSObject
{
    _Bool _trackEnabled;
    NSString *_creatorUID;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) _Bool trackEnabled; // @synthesize trackEnabled=_trackEnabled;
@property(copy, nonatomic) NSString *creatorUID; // @synthesize creatorUID=_creatorUID;
- (void)reset;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

