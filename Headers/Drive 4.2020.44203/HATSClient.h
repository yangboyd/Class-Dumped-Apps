//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <drive_extension_framework/HATSAPI-Protocol.h>

@protocol HATSAPI;

@interface HATSClient : NSObject <HATSAPI>
{
    id <HATSAPI> _hatsAPI;
}

- (void).cxx_destruct;
- (void)closeSurvey;
- (_Bool)isSurveyAvailable:(id)arg1;
- (_Bool)showSurveyIfAvailable:(id)arg1;
- (void)downloadSurvey:(id)arg1;
- (id)init;

@end

