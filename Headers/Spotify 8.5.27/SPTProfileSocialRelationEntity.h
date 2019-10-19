//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FollowData, NSString, NSURL, UIImage;

@interface SPTProfileSocialRelationEntity : NSObject
{
    _Bool _isCurrentUser;
    NSURL *_uri;
    NSString *_name;
    FollowData *_followData;
    NSURL *_imageURL;
    UIImage *_image;
}

@property(readonly, nonatomic) _Bool isCurrentUser; // @synthesize isCurrentUser=_isCurrentUser;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) FollowData *followData; // @synthesize followData=_followData;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSURL *uri; // @synthesize uri=_uri;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1 currentUsername:(id)arg2;

@end

