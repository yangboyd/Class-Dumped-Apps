//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;

@protocol SPTShow <NSObject>
@property(readonly, nonatomic) unsigned long long mediaType;
@property(readonly, nonatomic, getter=isFollowing) _Bool following;
@property(readonly, nonatomic) NSURL *imageURL;
@property(readonly, nonatomic) NSURL *latestPlayedEpisodeURL;
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, nonatomic) NSString *publisher;
@property(readonly, nonatomic) NSString *descriptionText;
@property(readonly, nonatomic) NSString *title;
@end

