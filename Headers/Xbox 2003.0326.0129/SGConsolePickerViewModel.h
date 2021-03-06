//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XBXModalViewModel.h"

#import "SGConsolePickerEnterIPItemDelegate-Protocol.h"

@class NSArray, NSError, NSString;
@protocol SGConsolePickerDelegate, SGIConsoleConnectionRequestHandler, XsgPrimaryDevice;

@interface SGConsolePickerViewModel : XBXModalViewModel <SGConsolePickerEnterIPItemDelegate>
{
    _Bool _isWifiError;
    _Bool _isFromOOBE;
    _Bool _isConnectionUserTriggered;
    int _mode;
    unsigned int _currentConsoleConnectionState;
    unsigned int _connectionStateViaIPAddress;
    NSArray *_consoleList;
    NSError *_error;
    id <SGIConsoleConnectionRequestHandler> _requestHandler;
    id <SGConsolePickerDelegate> _consolePickerDelegate;
    id <XsgPrimaryDevice> _currentConsoleInternal;
    NSString *_currentIPAddressConnectingTo;
}

@property(nonatomic) unsigned int connectionStateViaIPAddress; // @synthesize connectionStateViaIPAddress=_connectionStateViaIPAddress;
@property(retain, nonatomic) NSString *currentIPAddressConnectingTo; // @synthesize currentIPAddressConnectingTo=_currentIPAddressConnectingTo;
@property(retain, nonatomic) id <XsgPrimaryDevice> currentConsoleInternal; // @synthesize currentConsoleInternal=_currentConsoleInternal;
@property(nonatomic) unsigned int currentConsoleConnectionState; // @synthesize currentConsoleConnectionState=_currentConsoleConnectionState;
@property(nonatomic) _Bool isConnectionUserTriggered; // @synthesize isConnectionUserTriggered=_isConnectionUserTriggered;
@property(nonatomic) __weak id <SGConsolePickerDelegate> consolePickerDelegate; // @synthesize consolePickerDelegate=_consolePickerDelegate;
@property(nonatomic) __weak id <SGIConsoleConnectionRequestHandler> requestHandler; // @synthesize requestHandler=_requestHandler;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSArray *consoleList; // @synthesize consoleList=_consoleList;
@property(nonatomic) _Bool isFromOOBE; // @synthesize isFromOOBE=_isFromOOBE;
@property(nonatomic) _Bool isWifiError; // @synthesize isWifiError=_isWifiError;
- (void).cxx_destruct;
- (id)dataModel;
- (void)onEnterIPButtonClicked:(id)arg1;
- (void)updateConsoleItem:(id)arg1 connectionStateArgs:(id)arg2;
- (void)updateConsoleItem:(id)arg1;
- (void)updateConsolesStateWithConnectionStateArgs:(id)arg1;
- (void)updateConsolesState;
- (void)onConsoleConnectionStateChanged:(id)arg1;
- (void)onSGConsoleDiscoveryCompletedNotificationHandler:(id)arg1;
- (id)createDataContextsWithArray:(id)arg1;
- (id)getContextForIndex:(unsigned long long)arg1;
- (void)dismiss;
- (void)setUIAutoConnectSettingForDevice:(id)arg1 enable:(_Bool)arg2;
- (_Bool)getUIAutoConnectSettingForDevice:(id)arg1;
- (void)disconnectFromConsole:(id)arg1;
- (void)disconnect;
- (void)connectToIPAddress:(id)arg1 uiAutoConnectSetting:(_Bool)arg2;
- (void)connectToConsole:(id)arg1;
- (void)refresh;
- (void)onDestroy;
- (void)onDeactivate;
- (void)onActivate;
- (void)onInitialize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

