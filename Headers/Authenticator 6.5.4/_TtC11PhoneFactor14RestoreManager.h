//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController;

@interface _TtC11PhoneFactor14RestoreManager : NSObject
{
    // Error parsing type: , name: viewController
    // Error parsing type: , name: onRestoreFlowFinished
    // Error parsing type: , name: backupSerializer
    // Error parsing type: , name: TitleRecoverySuccessful
    // Error parsing type: , name: MessageRecoverySuccessful
    // Error parsing type: , name: backupType
}

+ (_Bool)isEligibleForRestoring;
- (void).cxx_destruct;
- (id)init;
- (void)restoreFromBackup:(id)arg1;
- (id)initWithViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(nonatomic, readonly) UIViewController *viewController; // @synthesize viewController;

@end

