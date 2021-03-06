//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDKActionPanelActionProducing-Protocol.h"

@class GDKTheme, NSString;
@protocol GDKSnackbarControlling, GDKTeamDriveMutating, SSOIdentity;

@interface GDATeamDriveChangeHiddenStateActionProducer : NSObject <GDKActionPanelActionProducing>
{
    id <GDKTeamDriveMutating> _teamDriveMutator;
    id <GDKSnackbarControlling> _snackbarController;
    id <SSOIdentity> _identity;
    GDKTheme *_theme;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GDKTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SSOIdentity> identity; // @synthesize identity=_identity;
@property(readonly, nonatomic) id <GDKSnackbarControlling> snackbarController; // @synthesize snackbarController=_snackbarController;
@property(readonly, nonatomic) id <GDKTeamDriveMutating> teamDriveMutator; // @synthesize teamDriveMutator=_teamDriveMutator;
- (id)actionForFile:(id)arg1;
- (id)cvoForHidden:(_Bool)arg1;
- (id)initWithTeamDriveMutator:(id)arg1 snackbarController:(id)arg2 identity:(id)arg3 theme:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

