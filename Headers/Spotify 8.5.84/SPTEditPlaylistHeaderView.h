//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SPTEditPlaylistHeaderViewStyle, SPTEditPlaylistRenameFieldView;

@interface SPTEditPlaylistHeaderView : UIView
{
    SPTEditPlaylistRenameFieldView *_textFieldContainer;
    SPTEditPlaylistHeaderViewStyle *_style;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTEditPlaylistHeaderViewStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) SPTEditPlaylistRenameFieldView *textFieldContainer; // @synthesize textFieldContainer=_textFieldContainer;
- (void)setupTitleView;
- (id)initWithStyle:(id)arg1;

@end

