//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GDKFileCV.h>

@class GDKFileTransferCVO, QTMProgressBar, UILabel, UIView;

@interface GDKFileTransferCV : GDKFileCV
{
    QTMProgressBar *_progressBar;
    UILabel *_fileSizeLabel;
    UIView *_sheerOverlayView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *sheerOverlayView; // @synthesize sheerOverlayView=_sheerOverlayView;
@property(retain, nonatomic) UILabel *fileSizeLabel; // @synthesize fileSizeLabel=_fileSizeLabel;
@property(retain, nonatomic) QTMProgressBar *progressBar; // @synthesize progressBar=_progressBar;
- (void)buttonWasPressed:(id)arg1;
- (void)applyTheme:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (_Bool)isThumbnailViewHidden;
- (void)prepareForReuse;
- (id)fileSizeString;
- (void)updateTransferFonts;
- (void)updateViewWithObject:(id)arg1 animated:(_Bool)arg2;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) GDKFileTransferCVO *object; // @dynamic object;

@end

