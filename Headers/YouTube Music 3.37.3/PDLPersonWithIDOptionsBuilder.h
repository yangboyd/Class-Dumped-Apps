//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PDLPersonWithIDOptionsBuilder : NSObject
{
    _Bool _optimizedForSpeed;
    _Bool _filterOutDeviceContact;
    _Bool _requiresServerExtendedData;
    _Bool _requiresEmailCertificate;
    _Bool _requiresEncodedProfileID;
    unsigned long long _photoSize;
}

@property(nonatomic) _Bool requiresEncodedProfileID; // @synthesize requiresEncodedProfileID=_requiresEncodedProfileID;
@property(nonatomic) _Bool requiresEmailCertificate; // @synthesize requiresEmailCertificate=_requiresEmailCertificate;
@property(nonatomic) _Bool requiresServerExtendedData; // @synthesize requiresServerExtendedData=_requiresServerExtendedData;
@property(nonatomic) _Bool filterOutDeviceContact; // @synthesize filterOutDeviceContact=_filterOutDeviceContact;
@property(nonatomic) _Bool optimizedForSpeed; // @synthesize optimizedForSpeed=_optimizedForSpeed;
@property(nonatomic) unsigned long long photoSize; // @synthesize photoSize=_photoSize;
- (id)build;

@end

