//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UIView;

@interface PGDayShowCell : UITableViewCell
{
    UIView *_labelsContainerView;
    UILabel *_showTimeLabel;
    UILabel *_showDescriptionLabel;
    UILabel *_showEventNameLabel;
    int *_currentCountry;
}

+ (id)nib;
+ (id)identifier;
- (void).cxx_destruct;
@property(nonatomic) int *currentCountry; // @synthesize currentCountry=_currentCountry;
@property(nonatomic) __weak UILabel *showEventNameLabel; // @synthesize showEventNameLabel=_showEventNameLabel;
@property(nonatomic) __weak UILabel *showDescriptionLabel; // @synthesize showDescriptionLabel=_showDescriptionLabel;
@property(nonatomic) __weak UILabel *showTimeLabel; // @synthesize showTimeLabel=_showTimeLabel;
@property(nonatomic) __weak UIView *labelsContainerView; // @synthesize labelsContainerView=_labelsContainerView;
- (void)setInfoByShow:(id)arg1;

@end

