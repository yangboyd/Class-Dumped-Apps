//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OAStackView.h"

#import "GWAMegalogsSupportingComponent-Protocol.h"

@class GWAImageWithCaptionView, GWAInfoMessageView, GWALabel, GWAMegalogsContext, NSArray, NSNumber, NSString, OrchPageHeader;

@interface GWAPageHeaderView : OAStackView <GWAMegalogsSupportingComponent>
{
    OrchPageHeader *_pageHeader;
    GWAImageWithCaptionView *_imageView;
    GWALabel *_titleLabel;
    GWAInfoMessageView *_subtitleView;
    GWAMegalogsContext *megalogsParentContext;
    GWAMegalogsContext *megalogsContext;
    NSNumber *megalogsUIReference;
    NSArray *subcomponentsSupportingMegalogs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *subcomponentsSupportingMegalogs; // @synthesize subcomponentsSupportingMegalogs;
@property(retain, nonatomic) NSNumber *megalogsUIReference; // @synthesize megalogsUIReference;
@property(retain, nonatomic) GWAMegalogsContext *megalogsContext; // @synthesize megalogsContext;
@property(nonatomic) __weak GWAMegalogsContext *megalogsParentContext; // @synthesize megalogsParentContext;
- (void)prepareMegalogsContexts;
- (_Bool)subtitleCloserToTitle;
- (void)applyDarkMode;
- (void)applyLightMode;
- (id)initWithPageHeader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

