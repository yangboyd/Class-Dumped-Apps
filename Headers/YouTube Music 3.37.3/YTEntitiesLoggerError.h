//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface YTEntitiesLoggerError : NSObject
{
    NSNumber *_entityStoreType;
    NSNumber *_entityType;
    NSNumber *_entityStoreActionType;
    NSNumber *_entityStoreErrorType;
    NSNumber *_sqliteLastErrorCode;
    NSNumber *_sqliteLastExtendedErrorCode;
}

@property(retain, nonatomic) NSNumber *sqliteLastExtendedErrorCode; // @synthesize sqliteLastExtendedErrorCode=_sqliteLastExtendedErrorCode;
@property(retain, nonatomic) NSNumber *sqliteLastErrorCode; // @synthesize sqliteLastErrorCode=_sqliteLastErrorCode;
@property(retain, nonatomic) NSNumber *entityStoreErrorType; // @synthesize entityStoreErrorType=_entityStoreErrorType;
@property(retain, nonatomic) NSNumber *entityStoreActionType; // @synthesize entityStoreActionType=_entityStoreActionType;
@property(retain, nonatomic) NSNumber *entityType; // @synthesize entityType=_entityType;
@property(retain, nonatomic) NSNumber *entityStoreType; // @synthesize entityStoreType=_entityStoreType;
- (void).cxx_destruct;

@end

