//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@interface BaseCollectionReusableView : UICollectionReusableView
{
    _Bool _fullyVisible;
}

@property(nonatomic) _Bool fullyVisible; // @synthesize fullyVisible=_fullyVisible;
- (void)didEndDisplayingCell;
- (void)willBeginDisplayingCell;
- (void)didBecomeFullyVisible;
- (void)prepareForReuse;

@end

