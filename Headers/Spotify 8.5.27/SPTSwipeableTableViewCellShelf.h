//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSIndexPath, UIColor;

@interface SPTSwipeableTableViewCellShelf : UIView
{
    NSIndexPath *_indexPath;
    double _currentPercentage;
    UIColor *_hintBackgroundColor;
    UIColor *_actionBackgroundColor;
    UIView *_hintView;
    UIView *_actionView;
    double _triggerPercentage;
    double _triggerInterval;
    unsigned long long _leadingEdge;
}

+ (id)colorMixedFrom:(id)arg1 and:(id)arg2 atRatio:(double)arg3;
+ (id)removeFromFavoritesShelf;
+ (id)addToFavoritesShelf;
+ (id)removeFromCollectionShelf;
+ (id)saveToCollectionShelf;
+ (id)queueShelf;
+ (id)destructiveShelfWithIcon:(long long)arg1 hintIcon:(long long)arg2;
+ (id)constructiveShelfWithIcon:(long long)arg1 hintIcon:(long long)arg2;
+ (id)shelfWithHintColor:(id)arg1 actionColor:(id)arg2 icon:(long long)arg3 hintIcon:(long long)arg4;
@property(nonatomic) unsigned long long leadingEdge; // @synthesize leadingEdge=_leadingEdge;
@property(nonatomic) double triggerInterval; // @synthesize triggerInterval=_triggerInterval;
@property(nonatomic) double triggerPercentage; // @synthesize triggerPercentage=_triggerPercentage;
@property(retain, nonatomic) UIView *actionView; // @synthesize actionView=_actionView;
@property(retain, nonatomic) UIView *hintView; // @synthesize hintView=_hintView;
@property(retain, nonatomic) UIColor *actionBackgroundColor; // @synthesize actionBackgroundColor=_actionBackgroundColor;
@property(retain, nonatomic) UIColor *hintBackgroundColor; // @synthesize hintBackgroundColor=_hintBackgroundColor;
@property(nonatomic) double currentPercentage; // @synthesize currentPercentage=_currentPercentage;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (id)preferredBackgroundColorForPercentage:(double)arg1 actionTriggered:(_Bool)arg2;
- (double)adjustPercentageFrom:(double)arg1;
- (void)layoutForPercentage:(double)arg1 actionTriggered:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

