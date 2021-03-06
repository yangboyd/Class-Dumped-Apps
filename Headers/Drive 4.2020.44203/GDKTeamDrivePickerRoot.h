//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDKPickerRoot-Protocol.h"
#import "GDKTeamDrivesVCDelegate-Protocol.h"

@class GDKTeamDrivePickerRootParams, GSCImageFetcher, GSCImageFetcherCache, GTLRIDriveService, NSString;
@protocol GDKChangelogPolling, GDKFlagObserving, GDKSnackbarControlling, GDKTeamDriveFilesVCConfiguring, GDKTeamDriveQuerying;

@interface GDKTeamDrivePickerRoot : NSObject <GDKTeamDrivesVCDelegate, GDKPickerRoot>
{
    GDKTeamDrivePickerRootParams *_params;
    id <GDKTeamDriveQuerying> _teamDriveQuerent;
    id <GDKChangelogPolling> _changelogPoller;
    id <GDKSnackbarControlling> _snackbarController;
    id <GDKTeamDriveFilesVCConfiguring> _filesVCConfiguration;
    GSCImageFetcher *_imageFetcher;
    GSCImageFetcherCache *_imageFetcherCache;
    id <GDKFlagObserving> _observableFlags;
    GTLRIDriveService *_driveService;
}

+ (id)pickerFilterWithParams:(id)arg1 teamDriveQuerent:(id)arg2 changelogPoller:(id)arg3 snackbarController:(id)arg4 filesVCConfiguration:(id)arg5 driveService:(id)arg6 imageFetcher:(id)arg7 imageFetcherCache:(id)arg8 observableFlags:(id)arg9;
+ (id)filterImage;
+ (id)filterTitle;
- (void).cxx_destruct;
@property(readonly, nonatomic) GTLRIDriveService *driveService; // @synthesize driveService=_driveService;
@property(readonly, nonatomic) id <GDKFlagObserving> observableFlags; // @synthesize observableFlags=_observableFlags;
@property(readonly, nonatomic) GSCImageFetcherCache *imageFetcherCache; // @synthesize imageFetcherCache=_imageFetcherCache;
@property(readonly, nonatomic) GSCImageFetcher *imageFetcher; // @synthesize imageFetcher=_imageFetcher;
@property(readonly, nonatomic) id <GDKTeamDriveFilesVCConfiguring> filesVCConfiguration; // @synthesize filesVCConfiguration=_filesVCConfiguration;
@property(readonly, nonatomic) id <GDKSnackbarControlling> snackbarController; // @synthesize snackbarController=_snackbarController;
@property(readonly, nonatomic) id <GDKChangelogPolling> changelogPoller; // @synthesize changelogPoller=_changelogPoller;
@property(readonly, nonatomic) id <GDKTeamDriveQuerying> teamDriveQuerent; // @synthesize teamDriveQuerent=_teamDriveQuerent;
@property(readonly, nonatomic) GDKTeamDrivePickerRootParams *params; // @synthesize params=_params;
- (void)teamDrivesVC:(id)arg1 didRemoveTeamDrives:(id)arg2;
- (id)rootViewControllerWithProducer:(id)arg1 title:(id)arg2;
- (id)initWithParams:(id)arg1 teamDriveQuerent:(id)arg2 changelogPoller:(id)arg3 snackbarController:(id)arg4 filesVCConfiguration:(id)arg5 driveService:(id)arg6 imageFetcher:(id)arg7 imageFetcherCache:(id)arg8 observableFlags:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

