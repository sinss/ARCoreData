//
//  NSManagedObject+ARCreate.h
//  Board
//
//  Created by August on 15/3/18.
//
//

#import <CoreData/CoreData.h>
#import "NSManagedObject+ARMapping.h"

@interface NSManagedObject (ARCreate)

/**
 *  creat an entity in mainQueue context
 *
 *  @return entity
 */
+(id)AR_new;

/**
 *  creat an new entity in your context
 *
 *  @param context your context
 *
 *  @return entity
 */
+(id)AR_newInContext:(NSManagedObjectContext *)context;

/**
 *  to ceate new or update existed object with JSON, this class should impliment ARManageObjectMappingProtocol pritocol
 *
 *  @param JSON key value object
 *
 *  @return mapping object
 */
+(id)AR_newOrUpdateWithJSON:(NSDictionary *)JSON;
/**
 *  to ceate new or update existed objects with JSONs, this class should impliment ARManageObjectMappingProtocol pritocol
 *
 *  @param JSON key value objects
 *
 *  @return mapping objects
 */
+(NSArray *)AR_newOrUpdateWithJSONs:(NSArray *)JSONs;

@end
