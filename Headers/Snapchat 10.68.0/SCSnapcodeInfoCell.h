//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSnapcodeCell.h"

@class NSString, SCFriendProfileCellTextViewV2, SCScanCardButton, SCSnapcodeView, SVGDocumentView, UIImage, UIImageView, UIView;
@protocol SCSnapcodeCellDelegate><SCSnapcodeInfoCellDelegate;

@interface SCSnapcodeInfoCell : SCSnapcodeCell
{
    UIView *_thumbnailContainer;
    UIImageView *_thumbnailGhostImage;
    SVGDocumentView *_thumbnailSnapcode;
    SCSnapcodeView *_thumbnailBitmojiSnapcodeView;
    UIView *_buttonActionContainer;
    SCFriendProfileCellTextViewV2 *_textViewV2;
    SCScanCardButton *_button;
    NSString *_secondTitle;
    NSString *_urlActionLink;
    NSString *_svgSnapcodeGhost;
    UIImageView *_forwardIndicatorView;
    id <SCSnapcodeCellDelegate><SCSnapcodeInfoCellDelegate> _navDelegate;
    UIImage *_ghostImage;
    NSString *_snapcodeSvgData;
}

@property(retain, nonatomic) NSString *snapcodeSvgData; // @synthesize snapcodeSvgData=_snapcodeSvgData;
@property(retain, nonatomic) UIImage *ghostImage; // @synthesize ghostImage=_ghostImage;
@property(nonatomic) __weak id <SCSnapcodeCellDelegate><SCSnapcodeInfoCellDelegate> navDelegate; // @synthesize navDelegate=_navDelegate;
- (void).cxx_destruct;
- (void)_updateButtonWithURL:(id)arg1;
- (id)fetchedSnapcodeSvgData;
- (void)updateSnapcodeSvg:(id)arg1;
- (void)updataGhostImage:(id)arg1;
- (void)updateTitle:(id)arg1;
- (void)updateSnapcodeInfo:(id)arg1;
- (void)updateWithMainLabel:(id)arg1 subLabel:(id)arg2 thirdLabel:(id)arg3 style:(long long)arg4;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)tapGestureDetected:(id)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 allowEdit:(_Bool)arg3 scannableInfo:(id)arg4 snapcodeView:(id)arg5;

@end

