//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JumioCore/JMBaseTableViewCell.h>

@class UIActivityIndicatorView;

@interface JMLoadingTableViewCell : JMBaseTableViewCell
{
    _Bool _loading;
    UIActivityIndicatorView *_activityIndicatorView;
}

@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
- (void).cxx_destruct;
- (void)initCell;

@end

