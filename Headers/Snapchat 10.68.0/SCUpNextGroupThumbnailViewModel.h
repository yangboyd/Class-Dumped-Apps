//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCAvatarViewModel, SCNetworkImage;

@interface SCUpNextGroupThumbnailViewModel : NSObject
{
    SCNetworkImage *_networkImage;
    SCAvatarViewModel *_avatarViewModel;
    NSString *_displayText;
    NSString *_attributionText;
}

@property(readonly, copy, nonatomic) NSString *attributionText; // @synthesize attributionText=_attributionText;
@property(readonly, copy, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
@property(readonly, nonatomic) SCAvatarViewModel *avatarViewModel; // @synthesize avatarViewModel=_avatarViewModel;
@property(readonly, nonatomic) SCNetworkImage *networkImage; // @synthesize networkImage=_networkImage;
- (void).cxx_destruct;
- (id)initWithNetworkImage:(id)arg1;
- (id)initWithDisplayText:(id)arg1;
- (id)initWithDisplayText:(id)arg1 attributionText:(id)arg2;
- (id)initWithAvatarViewModel:(id)arg1 displayText:(id)arg2 attributionText:(id)arg3;
- (id)initWithAvatarViewModel:(id)arg1 displayText:(id)arg2;

@end

