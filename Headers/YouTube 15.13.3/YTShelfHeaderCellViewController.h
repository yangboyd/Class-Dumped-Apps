//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTCellViewControllerProtocol-Protocol.h"
#import "YTResponder-Protocol.h"

@class GIMMe, NSMutableArray, NSString, YTIShelfRenderer, YTShelfHeaderView;
@protocol YTResponder, YTSectionControllerDelegate;

@interface YTShelfHeaderCellViewController : NSObject <YTCellViewControllerProtocol, YTResponder>
{
    _Bool _fullBleedThumbs;
    _Bool _visibilityUpdated;
    YTIShelfRenderer *_shelfRenderer;
    YTShelfHeaderView *_headerView;
    NSMutableArray *_thumbnailControllers;
    id <YTSectionControllerDelegate> sectionControllerDelegate;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
@property(nonatomic) __weak id <YTSectionControllerDelegate> sectionControllerDelegate; // @synthesize sectionControllerDelegate;
- (void).cxx_destruct;
- (unsigned long long)headerStyle;
- (_Bool)hasOverflowButton;
- (void)loadThumbnails;
- (void)showOverflowMenu:(id)arg1;
- (void)navigateToShelfEndpoint;
- (id)headerView;
- (_Bool)isSingleItemVerticalShelfOnFullBleed;
- (void)viewDidBecomeHidden;
- (void)viewWillBecomeVisible;
- (CDUnknownBlockType)cellNodeBlock;
- (Class)viewClass;
- (struct CGSize)viewSizeThatFits:(struct CGSize)arg1;
- (void)updateView:(id)arg1;
- (id)initWithShelfRenderer:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

