//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTContextMenuAction-Protocol.h"

@class NSString, UIImage, UIView;
@protocol SPTPodcastFilterContextAction;

@interface SPTPodcastFilterContextMenuAction : NSObject <SPTContextMenuAction>
{
    id <SPTPodcastFilterContextAction> _action;
    UIImage *_imageCache;
    UIView *_accessoryViewCache;
}

@property(retain, nonatomic) UIView *accessoryViewCache; // @synthesize accessoryViewCache=_accessoryViewCache;
@property(retain, nonatomic) UIImage *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) id <SPTPodcastFilterContextAction> action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)accessoryView;
- (id)subtitle;
- (id)iconImage;
- (id)performAction;
- (id)title;
- (id)initWithAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

