//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class GABPhotoBackupManager;

@protocol GABPhotoBackupManagerDelegate
- (void)photoManagerDidProgress:(int)arg1 photosExistingCount:(int)arg2 photosRemainingCount:(int)arg3;
- (void)photoManagerLowStorageDetected:(GABPhotoBackupManager *)arg1;
- (void)photoManagerWifiDisconnected:(GABPhotoBackupManager *)arg1 photosRemaining:(unsigned long long)arg2;
@end

