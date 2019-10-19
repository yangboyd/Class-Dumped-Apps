//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class MSADAToken, MSADeviceCredentials, NSMutableDictionary, NSString;

@interface MSADeviceIdentity : NSObject <NSCoding>
{
    NSMutableDictionary *_propertyBag;
    MSADAToken *_daToken;
    MSADeviceCredentials *_credentials;
    NSString *_puid;
}

@property(readonly) NSString *puid; // @synthesize puid=_puid;
@property(readonly) MSADeviceCredentials *credentials; // @synthesize credentials=_credentials;
@property(retain, nonatomic) MSADAToken *daToken; // @synthesize daToken=_daToken;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCredentials:(id)arg1 daToken:(id)arg2 puid:(id)arg3;
- (id)initWithCredentials:(id)arg1 puid:(id)arg2;
- (id)init;

@end

