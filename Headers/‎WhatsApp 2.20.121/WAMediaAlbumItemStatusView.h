//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, WAChatCellData, WAMessage, WAMessageStatusSliceView;

@interface WAMediaAlbumItemStatusView : UIView
{
    UIImageView *_shadowImageView;
    WAMessageStatusSliceView *_sliceView;
    WAChatCellData *_cellData;
    WAMessage *_message;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WAMessage *message; // @synthesize message=_message;
- (void)managedObjectContextObjectsDidChange:(id)arg1;
- (id)initWithMessage:(id)arg1;

@end

