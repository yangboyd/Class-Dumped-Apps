//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopDataItemsCalendarApiAsyncCalendarEventDataServiceComponent, JBTRuntimeOptionsComponent;
@protocol ComGoogleAppsBigtopDataCommonCommonComponent, ComGoogleAppsBigtopDataSettingsSettingsClientComponent, JBTISapiSmartMailComponent, JBTISmartMailCommonComponent, JBTLoggingEventLoggingComponent;

@interface ComGoogleAppsBigtopSyncClientImplSmartmailCalendarDaggerCalendarSmartMailComponentImpl_Builder : NSObject
{
    ComGoogleAppsBigtopDataItemsCalendarApiAsyncCalendarEventDataServiceComponent *asyncCalendarEventDataServiceComponent_;
    id <ComGoogleAppsBigtopDataCommonCommonComponent> commonComponent_;
    id <JBTLoggingEventLoggingComponent> eventLoggingComponent_;
    JBTRuntimeOptionsComponent *runtimeOptionsComponent_;
    id <JBTISapiSmartMailComponent> sapiSmartMailComponent_;
    id <ComGoogleAppsBigtopDataSettingsSettingsClientComponent> settingsClientComponent_;
    id <JBTISmartMailCommonComponent> smartMailCommonComponent_;
}

- (void)dealloc;
- (id)build;
- (id)smartMailCommonComponentWithJBTISmartMailCommonComponent:(id)arg1;
- (id)settingsClientComponentWithComGoogleAppsBigtopDataSettingsSettingsClientComponent:(id)arg1;
- (id)sapiSmartMailComponentWithJBTISapiSmartMailComponent:(id)arg1;
- (id)runtimeOptionsComponentWithJBTRuntimeOptionsComponent:(id)arg1;
- (id)eventLoggingComponentWithJBTLoggingEventLoggingComponent:(id)arg1;
- (id)commonComponentWithComGoogleAppsBigtopDataCommonCommonComponent:(id)arg1;
- (id)asyncCalendarEventDataServiceComponentWithComGoogleAppsBigtopDataItemsCalendarApiAsyncCalendarEventDataServiceComponent:(id)arg1;

@end

