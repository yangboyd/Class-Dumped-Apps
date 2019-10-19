//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCFriendLocationSnapshotMapLocation, UIImage;

@interface SCFriendLocationSnapshotMapViewModel : NSObject <NSCopying>
{
    SCFriendLocationSnapshotMapLocation *_mapLocation;
    NSString *_centeredLabel;
    NSString *_bottomLabel;
    UIImage *_standingPersonImage;
    NSString *_calloutTitle;
    NSString *_calloutSubtitle;
}

@property(readonly, copy, nonatomic) NSString *calloutSubtitle; // @synthesize calloutSubtitle=_calloutSubtitle;
@property(readonly, copy, nonatomic) NSString *calloutTitle; // @synthesize calloutTitle=_calloutTitle;
@property(readonly, copy, nonatomic) UIImage *standingPersonImage; // @synthesize standingPersonImage=_standingPersonImage;
@property(readonly, copy, nonatomic) NSString *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(readonly, copy, nonatomic) NSString *centeredLabel; // @synthesize centeredLabel=_centeredLabel;
@property(readonly, copy, nonatomic) SCFriendLocationSnapshotMapLocation *mapLocation; // @synthesize mapLocation=_mapLocation;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMapLocation:(id)arg1 centeredLabel:(id)arg2 bottomLabel:(id)arg3 standingPersonImage:(id)arg4 calloutTitle:(id)arg5 calloutSubtitle:(id)arg6;

@end

