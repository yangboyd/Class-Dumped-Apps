//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBComponent-Protocol.h"

@class NSSet, SPTFreeTierArtistGLUETheme;

@interface SPTFreeTierArtistPinnedItemRowHubComponent : NSObject <HUBComponent>
{
    SPTFreeTierArtistGLUETheme *_theme;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTFreeTierArtistGLUETheme *theme; // @synthesize theme=_theme;
@property(readonly, copy, nonatomic) NSSet *layoutTraits;
- (id)createViewWithFrame:(struct CGRect)arg1;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (id)initWithTheme:(id)arg1;

@end

