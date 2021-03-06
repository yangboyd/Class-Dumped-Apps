//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierTasteOnboardingArtistPickerViewControllerDelegate-Protocol.h"
#import "SPTFreeTierTasteOnboardingUpdateTasteViewControllerDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSString, SPTFreeTierArtistPickerConfiguration;
@protocol SPTArtistPickerViewControllerProviderDelegate;

@interface SPTArtistPickerViewControllerProvider : NSObject <SPTFreeTierTasteOnboardingArtistPickerViewControllerDelegate, SPTFreeTierTasteOnboardingUpdateTasteViewControllerDelegate, UITextFieldDelegate>
{
    SPTFreeTierArtistPickerConfiguration *_configuration;
    id <SPTArtistPickerViewControllerProviderDelegate> _delegate;
    long long _seedASessionVisualTreatment;
}

@property(nonatomic) long long seedASessionVisualTreatment; // @synthesize seedASessionVisualTreatment=_seedASessionVisualTreatment;
@property(nonatomic) __weak id <SPTArtistPickerViewControllerProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SPTFreeTierArtistPickerConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)updateSeedASessionDidFail;
- (void)updateSeedASessionDidComplete:(id)arg1;
- (void)updateTasteViewControllerDidComplete:(id)arg1;
- (void)createEmptyPlaylist;
- (void)artistPickerViewController:(id)arg1 didComplete:(_Bool)arg2 withSelectedArtistURIs:(id)arg3 includeSimilarArtists:(_Bool)arg4 session:(id)arg5;
- (void)closeArtistPicker;
- (id)provideCurateSeedASessionViewControllerWithSelectedArtistsURIs:(id)arg1 includeSimilarArtists:(_Bool)arg2 session:(id)arg3;
- (id)provideArtistPickerViewController:(long long)arg1;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

