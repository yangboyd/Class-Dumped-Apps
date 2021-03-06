//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class HeadView, PanguBaseWidgetModel, PanguHorizontalSlideView;

@interface PanguCarouselAsinWidgetView : UITableViewCell
{
    PanguBaseWidgetModel *_model;
    PanguHorizontalSlideView *_collectionView;
    HeadView *_headerView;
}

+ (id)headerViewForCarouselWidget;
@property(retain, nonatomic) HeadView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) PanguHorizontalSlideView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) PanguBaseWidgetModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)layoutWithData:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

