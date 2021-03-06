//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PSPDFKitUI/PSPDFStylusDriver-Protocol.h>

@class NSDictionary, NSString, UIViewController;
@protocol PSPDFStylusDriverDelegate;

@interface PSPDFApplePencilDriver : NSObject <PSPDFStylusDriver>
{
    id <PSPDFStylusDriverDelegate> _delegate;
}

+ (id)driverInfo;
+ (void)setDetected:(_Bool)arg1;
+ (_Bool)wasDetected;
@property(nonatomic) __weak id <PSPDFStylusDriverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *connectedStylusInfo;
- (void)disableDriver;
- (_Bool)enableDriverWithOptions:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) unsigned long long connectionStatus;
- (void)detectedChanged:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIViewController *settingsController;
@property(readonly, nonatomic) NSDictionary *settingsControllerInfo;
@property(readonly) Class superclass;

@end

