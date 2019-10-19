//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCLensSubPickerController.h"

@class LSAExternalImageComponent, LSAPresetsComponent, NSString, UILabel, UIView;
@protocol SCLensCrashLoggerProtocol, SCLensFaceImageProviderProtocol;

@interface SCLensPresetAndPhotoPickerController : SCLensSubPickerController
{
    UILabel *_warningMessageLabel;
    UIView *_photoAccessPromptView;
    LSAPresetsComponent *_presetsComponent;
    LSAExternalImageComponent *_externalImageComponent;
    NSString *_userName;
    id <SCLensCrashLoggerProtocol> _lensCrashLogger;
    NSString *_selectedOptionRequestId;
}

@property(retain, nonatomic) NSString *selectedOptionRequestId; // @synthesize selectedOptionRequestId=_selectedOptionRequestId;
@property(retain, nonatomic) UIView *photoAccessPromptView; // @synthesize photoAccessPromptView=_photoAccessPromptView;
@property(retain, nonatomic) UILabel *warningMessageLabel; // @synthesize warningMessageLabel=_warningMessageLabel;
- (void).cxx_destruct;
- (void)lensSubPickerImageProvider:(id)arg1 didUpdateWithImageCount:(long long)arg2 canProcessMore:(_Bool)arg3;
- (void)_didTapAllowButton;
- (void)setPhotoPermissionsPromptHidden:(_Bool)arg1;
- (void)showWarningWithText:(id)arg1;
- (void)hideNoImagesWarning;
- (void)showNoImagesWarningIfNeeded;
- (void)innerSelectOptionAtIndex:(long long)arg1 cellToSelect:(id)arg2;
- (void)hideAnimated:(_Bool)arg1;
- (void)showAnimated:(_Bool)arg1;
- (void)setUpPhotoAccessPromptView;
- (void)setUpWarningMessageLabel;
- (id)initWithParentView:(id)arg1 lensContainer:(id)arg2 lensLogger:(id)arg3 userName:(id)arg4 presetsComponent:(id)arg5 presetImageProvider:(id)arg6 externalImageComponent:(id)arg7 photoFaceImageProvider:(id)arg8 additionalMargins:(struct UIEdgeInsets)arg9 lensCrashLogger:(id)arg10;

// Remaining properties
@property(retain, nonatomic) id <SCLensFaceImageProviderProtocol> imageProvider; // @dynamic imageProvider;

@end

