//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseListSectionViewModel.h"

@class NSDictionary, NSString;

@interface AWEDiscoverV4TrendingListSectionViewModel : AWEBaseListSectionViewModel
{
    _Bool _showBanner;
    NSString *_enterFrom;
    NSDictionary *_logExtraDict;
}

@property(copy) NSDictionary *logExtraDict; // @synthesize logExtraDict=_logExtraDict;
@property(copy) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property _Bool showBanner; // @synthesize showBanner=_showBanner;
- (void).cxx_destruct;
- (_Bool)shouldHiddenViewMoreFooterViewWithModel:(id)arg1;
- (void)configWithParams:(id)arg1;

@end

