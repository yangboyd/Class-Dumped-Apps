//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ServiceCore/SCSNotification.h>

@class NSString;

@interface SCSCaseNotification : SCSNotification
{
    long long _notificationType;
    NSString *_caseId;
}

@property(retain, nonatomic) NSString *caseId; // @synthesize caseId=_caseId;
- (long long)notificationType;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool referencesSpecificCase;
- (id)initWithRemoteNotificationDictionary:(id)arg1;

@end

