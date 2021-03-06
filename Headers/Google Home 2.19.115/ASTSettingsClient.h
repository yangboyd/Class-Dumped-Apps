//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASTWebSettingsViewControllerDelegate-Protocol.h"

@class ASTAuthService, NSDictionary, NSMutableDictionary, NSString;
@protocol ASTSettingsClientDataSource, ASTSettingsClientDelegate;

@interface ASTSettingsClient : NSObject <ASTWebSettingsViewControllerDelegate>
{
    id <ASTSettingsClientDataSource> _dataSource;
    id <ASTSettingsClientDelegate> _delegate;
    NSMutableDictionary *_webSettingsViewControllerDictionary;
    ASTAuthService *_authService;
}

@property(retain, nonatomic) ASTAuthService *authService; // @synthesize authService=_authService;
@property(retain, nonatomic) NSMutableDictionary *webSettingsViewControllerDictionary; // @synthesize webSettingsViewControllerDictionary=_webSettingsViewControllerDictionary;
@property(nonatomic) __weak id <ASTSettingsClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <ASTSettingsClientDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (_Bool)settingsWebViewController:(id)arg1 willOpenURL:(id)arg2;
- (id)webViewControllerForSettingsType:(long long)arg1;
- (id)viewControllerForSettingsType:(long long)arg1 featureActionParam:(id)arg2;
- (id)viewControllerForSettingsType:(long long)arg1;
@property(readonly, nonatomic) NSDictionary *settingsURLDictionary;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

