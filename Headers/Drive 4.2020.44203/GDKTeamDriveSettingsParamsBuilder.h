//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol GDKFile;

@interface GDKTeamDriveSettingsParamsBuilder : NSObject
{
    _Bool _showDriveFSRestriction;
    id <GDKFile> _teamDrive;
}

+ (id)builderFromExistingObject:(id)arg1;
+ (id)builderWithTeamDrive:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool showDriveFSRestriction; // @synthesize showDriveFSRestriction=_showDriveFSRestriction;
@property(retain, nonatomic) id <GDKFile> teamDrive; // @synthesize teamDrive=_teamDrive;
- (id)build;

@end

