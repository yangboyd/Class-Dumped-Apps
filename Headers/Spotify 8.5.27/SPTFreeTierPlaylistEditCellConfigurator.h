//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTFreeTierPlaylistEditCellStyle;
@protocol SPTFreeTierPlaylistEditCellConfiguratorDelegate;

@interface SPTFreeTierPlaylistEditCellConfigurator : NSObject
{
    id <SPTFreeTierPlaylistEditCellConfiguratorDelegate> _delegate;
    SPTFreeTierPlaylistEditCellStyle *_editCellStyle;
}

@property(readonly, nonatomic) SPTFreeTierPlaylistEditCellStyle *editCellStyle; // @synthesize editCellStyle=_editCellStyle;
@property(nonatomic) __weak id <SPTFreeTierPlaylistEditCellConfiguratorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (Class)cellClass;
- (void)deletePressed:(id)arg1;
- (void)configureCell:(id)arg1 withTrackViewModel:(id)arg2;
- (id)initWithEditCellStyle:(id)arg1;

@end

