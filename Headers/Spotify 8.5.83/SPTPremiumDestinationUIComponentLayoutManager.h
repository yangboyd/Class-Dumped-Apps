//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBComponentLayoutManager-Protocol.h"

@class NSString, SPTPremiumDestinationUIGLUETheme, UIView;
@protocol HUBComponentLayoutManager;

@interface SPTPremiumDestinationUIComponentLayoutManager : NSObject <HUBComponentLayoutManager>
{
    UIView *_contentView;
    id <HUBComponentLayoutManager> _hugsLayoutManager;
    SPTPremiumDestinationUIGLUETheme *_theme;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTPremiumDestinationUIGLUETheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <HUBComponentLayoutManager> hugsLayoutManager; // @synthesize hugsLayoutManager=_hugsLayoutManager;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
- (double)containerMaxWidthForComponentWithLayoutTraits:(id)arg1;
- (unsigned long long)containerAlignmentForComponentWithLayoutTraits:(id)arg1;
- (double)horizontalOffsetForComponentsWithLayoutTraits:(id)arg1 firstComponentLeadingHorizontalOffset:(double)arg2 lastComponentTrailingHorizontalOffset:(double)arg3;
- (double)verticalMarginForComponentWithLayoutTraits:(id)arg1 precedingComponentLayoutTraits:(id)arg2;
- (double)horizontalMarginForComponentWithLayoutTraits:(id)arg1 precedingComponentLayoutTraits:(id)arg2;
- (double)verticalMarginBetweenComponentWithLayoutTraits:(id)arg1 andHeaderComponentWithLayoutTraits:(id)arg2;
- (double)marginBetweenComponentWithLayoutTraits:(id)arg1 andContentEdge:(unsigned long long)arg2;
- (id)initWithHugsLayoutManager:(id)arg1 theme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

