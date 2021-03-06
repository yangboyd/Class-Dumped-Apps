//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ArcusARN, ArcusAttributes, ArcusConfigurationDb, NSString;

@interface ArcusManager : NSObject
{
    NSString *_endpoint;
    ArcusAttributes *_attributes;
    ArcusARN *_appConfigARN;
    ArcusConfigurationDb *_configurationDb;
}

+ (id)managerForAppConfigId:(id)arg1 withDefaultConfiguration:(id)arg2 error:(id *)arg3;
+ (id)managerForAppConfigId:(id)arg1 error:(id *)arg2;
+ (void)setSharedManagerCache:(id)arg1;
+ (id)sharedManagerCache;
@property(readonly, nonatomic) ArcusConfigurationDb *configurationDb; // @synthesize configurationDb=_configurationDb;
@property(readonly, nonatomic) ArcusARN *appConfigARN; // @synthesize appConfigARN=_appConfigARN;
@property(readonly, nonatomic) ArcusAttributes *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) NSString *endpoint; // @synthesize endpoint=_endpoint;
- (void).cxx_destruct;
- (id)loadConfigurationAsync;
- (id)loadConfiguration:(id *)arg1;
- (id)openAttributes:(id *)arg1;
- (id)openConfiguration:(id *)arg1;
- (_Bool)saveDefaultConfiguration:(id)arg1 error:(id *)arg2;
- (id)initWithAppConfigId:(id)arg1 defaultConfiguration:(id)arg2 error:(id *)arg3;

@end

