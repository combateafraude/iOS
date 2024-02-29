#ifndef CAF_VALIDATE_H
#define CAF_VALIDATE_H

typedef enum {
    SCAN_A_DOCUMENT = 0,
    GET_CLOSER,
    CENTRALIZE,
    MOVE_AWAY,
    ALIGN_THE_DOCUMENT,
    TURN_DOCUMENT_90_DEGREES,
    CAPTURED = 99
} e_validate_return;

/**
 * Validates the information obtained by model inference.
 *
 * @param numCols
 * @param numRows
 * @param imageWidth
 * @param imageHeight
 * @param matrix
 *
 * @return 0 - Document not found.
 *         1 - Document needed to be closer.
 *         2 - Document needed to be centralized.
 *         3 - Document is must close, need move away.
 *         4 - Rotate the document 45 degrees.
 *         5 - Rotate the document 90 degrees.
 *         99 - Document 'OK', can capture.
 */
e_validate_return validate(int numCols, int numRows, int imageWidth, int imageHeight, float iaResult[]);

#endif //CAF_VALIDATE_H
