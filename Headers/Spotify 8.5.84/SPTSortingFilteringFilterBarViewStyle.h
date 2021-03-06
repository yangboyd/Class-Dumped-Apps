//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSortingFilteringFilterBarStyle-Protocol.h"

@class NSString, UIColor;
@protocol SPTSortingFilteringButtonsContainerStyle, SPTSortingFilteringFilterBarSortButtonStyle, SPTSortingFilteringSearchFieldStyle;

@interface SPTSortingFilteringFilterBarViewStyle : NSObject <SPTSortingFilteringFilterBarStyle>
{
    UIColor *backgroundColor;
    double height;
    id <SPTSortingFilteringFilterBarSortButtonStyle> contextMenuButtonStyle;
    double margin;
    double topMargin;
    double spacing;
    id <SPTSortingFilteringSearchFieldStyle> searchFieldStyle;
    id <SPTSortingFilteringButtonsContainerStyle> clearFiltersControlStyle;
    id <SPTSortingFilteringButtonsContainerStyle> filterButtonsContainerStyle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) id <SPTSortingFilteringButtonsContainerStyle> filterButtonsContainerStyle; // @synthesize filterButtonsContainerStyle;
@property(copy, nonatomic) id <SPTSortingFilteringButtonsContainerStyle> clearFiltersControlStyle; // @synthesize clearFiltersControlStyle;
@property(copy, nonatomic) id <SPTSortingFilteringSearchFieldStyle> searchFieldStyle; // @synthesize searchFieldStyle;
@property(nonatomic) double spacing; // @synthesize spacing;
@property(nonatomic) double topMargin; // @synthesize topMargin;
@property(nonatomic) double margin; // @synthesize margin;
@property(copy, nonatomic) id <SPTSortingFilteringFilterBarSortButtonStyle> contextMenuButtonStyle; // @synthesize contextMenuButtonStyle;
@property(nonatomic) double height; // @synthesize height;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

