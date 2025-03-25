#include <vector>

using std::vector;

const vector<vector<double>> input_data = {{0.0, 0.0, 0.0, 0.0},
                                           {0.0, 0.0, 0.0, 1.0},  // AND
                                           {0.0, 0.0, 1.0, 0.0},
                                           {0.0, 0.0, 1.0, 1.0},
                                           {0.0, 1.0, 0.0, 0.0},
                                           {0.0, 1.0, 0.0, 1.0},
                                           {0.0, 1.0, 1.0, 0.0},  // XOR
                                           {0.0, 1.0, 1.0, 1.0},  // OR
                                           {1.0, 0.0, 0.0, 0.0},  // NOR
                                           {1.0, 0.0, 0.0, 1.0},  // XNOR
                                           {1.0, 0.0, 1.0, 0.0},
                                           {1.0, 0.0, 1.0, 1.0},
                                           {1.0, 1.0, 0.0, 0.0},
                                           {1.0, 1.0, 0.0, 1.0},
                                           {1.0, 1.0, 1.0, 0.0},  // NAND
                                           {1.0, 1.0, 1.0, 1.0}};

                                        //   AND  NAND OR   NOR  XOR  XNOR NONE
const vector<vector<double>> output_data = {{0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0},
                                            {1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
                                            {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0},
                                            {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0},
                                            {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0},
                                            {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0},
                                            {0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0},
                                            {0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0},
                                            {0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0},
                                            {0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                                            {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0},
                                            {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0},
                                            {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0},
                                            {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0},
                                            {0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0},
                                            {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0}};